/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSExpression, NSVariableExpression;

@interface NSVariableAssignmentExpression : NSExpression  {
    NSVariableExpression *_assignmentVariable;
    NSExpression *_subexpression;
}


- (id)assignmentVariable;
- (id)initWithAssignmentExpression:(id)arg1 expression:(id)arg2;
- (id)subexpression;
- (id)initWithAssignmentVariable:(id)arg1 expression:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)variable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;

@end
