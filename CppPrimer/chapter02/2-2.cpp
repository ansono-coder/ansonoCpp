/**
 * 计算按揭贷款时，利率、本金、付款分别选择何种数据类型
 * 利率选 unsigned double：利率至少要精确到小数点后3位
 * 本金选 unsigned double：本金可能不是整数
 * 付款选 unsigned double：付款也可能不是整数
 * 
 * 都选 unsigned double的理由: unsigned double的取值范围大，且金钱和利率不可能为负数
*/
