#pragma once
#include <functional>
#include <unordered_map>
#include <unordered_set>
#include <optional>
#include <vector>
#include <stack>
#include "def.h"
#include "head_interactorBaseListener.h"
#include "domain.h"

class BaseData;

using namespace std::string_view_literals;

class FunctionNode;
class RangeOperationNode;
class VariableNode;
class Node;

class BaseListener: public head_interactorBaseListener{
    enum class MODE{
        VARDEF,
        RANGEOPERATION = 0b000000000000001,
        MULTIARGFUNCTION = 0b000000000000010,
        FUNCTIONOPERATION = 0b000000000000100,
        DOMAIN_DEFINITION = 0b000000000001000,
        LHS_DOMAIN = 0b000000000010000,
        RHS_DOMAIN = 0b000000000100000,
        EXPR_DOMAIN = 0b000000001000000,
        ARRAY_DEFINITION = 0b000000010000000,
        ARRAY_ITEM_DEFINITION = 0b000000100000000,
        EXPRESSION = 0b000001000000000,
        VALUE = 0b000010000000000,
        NODE = 0b000100000000000
    };

    friend MODE operator|(MODE lhs,MODE rhs);
    friend MODE operator&(MODE lhs,MODE rhs);

    bool is_range_operation() const;
    bool is_function_operation() const;
    bool is_variable_definition() const;
    bool is_domain_definition() const;
    bool is_expression_definition() const;
    bool is_array_definition() const;
    bool is__array_item_definition() const;

    void __insert_to_prec_node__(MODE mode_assert_check);

    BaseData* __insert_new_data_base__(std::string&& name);

    std::stack<std::shared_ptr<Node>> anonymous_node_;
    std::stack<MODE> mode_;
    std::optional<Domain> domain_;
    std::shared_ptr<Node> current_node_;
    std::unique_ptr<INFO_NODE> info;
    BaseData* data_base_;
    
    public:
    BaseListener(BaseData* data_base):
    data_base_(data_base)
    {}

    virtual void enterParens(head_interactorParser::ParensContext* ctx) override;

    virtual void exitParens(head_interactorParser::ParensContext* ctx) override;

    virtual void enterVardefinition(head_interactorParser::VardefinitionContext * ctx) override;
    
    virtual void exitVardefinition(head_interactorParser::VardefinitionContext * ctx) override;

    virtual void enterVariable(head_interactorParser::VariableContext *ctx) override;

    virtual void exitVariable(head_interactorParser::VariableContext *ctx) override;

    virtual void enterUnaryOp(head_interactorParser::UnaryOpContext *ctx) override;

    virtual void exitUnaryOp(head_interactorParser::UnaryOpContext* ctx) override;

    virtual void enterLiteral(head_interactorParser::LiteralContext *ctx) override;

    virtual void exitLiteral(head_interactorParser::LiteralContext *ctx) override;

    //a connstant definition {for example: Lg(Expr)}
    virtual void enterConstant(head_interactorParser::ConstantContext *ctx) override;

    virtual void exitConstant(head_interactorParser::ConstantContext *ctx) override;

    //binary operator {for example: Expr + Expr or Expr / Expr}
    virtual void enterBinaryOp(head_interactorParser::BinaryOpContext *ctx) override;

    virtual void exitBinaryOp(head_interactorParser::BinaryOpContext *ctx) override;

    //an array definition {for example: [1,2,3,...]}
    virtual void enterArray(head_interactorParser::ArrayContext *ctx) override;

    virtual void exitArray(head_interactorParser::ArrayContext *ctx) override;

    virtual void enterItemArray(head_interactorParser::ItemArrayContext *ctx) override;

    virtual void exitItemArray(head_interactorParser::ItemArrayContext *ctx) override;

    virtual void enterRangefunction(head_interactorParser::RangefunctionContext* ctx) override;

    virtual void exitRangefunction(head_interactorParser::RangefunctionContext* ctx) override;

    virtual void enterNumber(head_interactorParser::NumberContext* ctx) override;

    virtual void exitNumber(head_interactorParser::NumberContext* ctx) override;

    virtual void enterMultiargfunction(head_interactorParser::MultiargfunctionContext* ctx) override;

    virtual void exitMultiargfunction(head_interactorParser::MultiargfunctionContext* ctx) override;

    virtual void enterFunction(head_interactorParser::FunctionContext* ctx) override;

    virtual void exitFunction(head_interactorParser::FunctionContext* ctx) override;

    virtual void enterComparision(head_interactorParser::ComparisionContext* ctx) override;

    virtual void exitComparision(head_interactorParser::ComparisionContext* ctx) override;

    virtual void enterLhs_comp(head_interactorParser::Lhs_compContext* ctx) override;

    virtual void exitLhs_comp(head_interactorParser::Lhs_compContext* ctx) override;

    virtual void enterRhs_comp(head_interactorParser::Rhs_compContext* ctx) override;

    virtual void exitRhs_comp(head_interactorParser::Rhs_compContext* ctx) override;

    virtual void enterExpr_comp(head_interactorParser::Expr_compContext* ctx) override;

    virtual void exitExpr_comp(head_interactorParser::Expr_compContext* ctx) override;

    virtual void enterString(head_interactorParser::StringContext * ctx) override;

    virtual void exitString(head_interactorParser::StringContext * ctx) override;

    virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override;

};

BaseListener::MODE operator|(BaseListener::MODE lhs,BaseListener::MODE rhs);
BaseListener::MODE operator&(BaseListener::MODE lhs,BaseListener::MODE rhs);