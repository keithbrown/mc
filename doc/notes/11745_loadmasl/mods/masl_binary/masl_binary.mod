domain masl_binary is
  object BinaryAdditiveExpression;
  object BinaryCollectionExpression;
  object BinaryComparisonExpression;
  object BinaryExpression;
  object BinaryLogicalExpression;
  object BinaryMultiplicativeExpression;
  object Z_BasicType_binary;
  object Z_Expression_binary;
  relationship R5000 is BinaryExpression is_a ( BinaryAdditiveExpression, BinaryCollectionExpression, BinaryComparisonExpression, BinaryLogicalExpression, BinaryMultiplicativeExpression );
  relationship R5001 is BinaryExpression unconditionally is_rhs_of one Z_Expression_binary, Z_Expression_binary conditionally has_rhs one BinaryExpression;
  relationship R5002 is BinaryExpression unconditionally is_lhs_of one Z_Expression_binary, Z_Expression_binary conditionally has_lhs one BinaryExpression;
  relationship R5003 is BinaryMultiplicativeExpression unconditionally is_type_of one Z_BasicType_binary, Z_BasicType_binary conditionally types one BinaryMultiplicativeExpression;
  object BinaryAdditiveExpression is
  end object; pragma id(5000);
  object BinaryCollectionExpression is
  end object; pragma id(5001);
  object BinaryComparisonExpression is
  end object; pragma id(5002);
  object BinaryExpression is
    operator : OperatorRef;
    //!R5001
    rhs : iExpression;
    //!R5002
    lhs : iExpression;
  end object; pragma id(5003);
  object BinaryLogicalExpression is
  end object; pragma id(5004);
  object BinaryMultiplicativeExpression is
    //!R5003
    resultType : iBasicType;
  end object; pragma id(5005);

  //!IMPORTED
  object Z_BasicType_binary is
  end object; pragma id(5006);

  //!IMPORTED
  object Z_Expression_binary is
  end object; pragma id(5007);
end domain;
