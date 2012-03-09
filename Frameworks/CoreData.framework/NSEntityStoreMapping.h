/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSEntityDescription, NSArray, NSString, NSDictionary;

@interface NSEntityStoreMapping : NSStoreMapping  {
    NSEntityDescription *_entity;
    NSDictionary *_propertyMappings;
    NSArray *_primaryKeys;
    BOOL _isSingleTableEntity;
    NSString *_subentityColumn;
    unsigned int _subentityID;
}


- (void)setEntity:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithEntity:(id)arg1;
- (id)createTableStatement;
- (void)setPropertyMappings:(id)arg1;
- (void)setPrimaryKeys:(id)arg1;
- (void)setSingleTableEntity:(BOOL)arg1;
- (void)setSubentityColumn:(id)arg1;
- (void)setSubentityID:(unsigned int)arg1;
- (id)propertyMappings;
- (id)primaryKeys;
- (BOOL)isSingleTableEntity;
- (id)subentityColumn;
- (unsigned int)subentityID;
- (id)primaryKeyColumnDefinitions;
- (id)attributeColumnDefinitions;
- (id)foreignKeyColumnDefinitions;
- (id)foreignKeyConstraintDefinitions;
- (id)attributeMappings;
- (id)relationshipMappings;
- (id)entity;

@end
