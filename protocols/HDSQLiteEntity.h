/* Generated by RuntimeBrowser.
 */

@protocol HDSQLiteEntity <NSObject>

@required

+ (NSArray *)allDatabaseColumnNames;
+ (NSSet *)checkConstraints;
+ (const struct { id x1; unsigned char x2; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (NSArray *)columnsDefinition;
+ (NSString *)databaseName;
+ (NSString *)databaseTable;
+ (HDSQLiteStatement *)deleteStatementWithProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
+ (NSString *)disambiguatedDatabaseTable;
+ (NSString *)disambiguatedSQLForProperty:(NSString *)arg1;
+ (Class)entityClassForEnumeration;
+ (Class)entityForProperty:(NSString *)arg1;
+ (void)enumerateColumnsWithBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _HDSQLiteEntityColumn *, bool*, void*
+ (NSDictionary *)foreignKeys;
+ (NSArray *)indices;
+ (bool)isTemporary;
+ (NSSet *)joinClausesForProperty:(NSString *)arg1;
+ (NSArray *)privateSubEntities;
+ (NSArray *)tableAliases;

- (NSUUID *)UUIDForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (bool)booleanForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (NSDate *)dateForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (bool)deleteFromDatabase:(HDSQLiteDatabase *)arg1 error:(id*)arg2;
- (bool)getValuesForProperties:(void *)arg1 database:(void *)arg2 error:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 10: NSArray *, HDSQLiteDatabase *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, struct HDSQLiteRow { }*, void*
- (bool)getValuesForProperties:(void *)arg1 database:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, HDSQLiteDatabase *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, struct HDSQLiteRow { }*, void*
- (NSNumber *)numberForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (NSString *)stringForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (id)valueForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (void)willDeleteFromDatabase:(HDSQLiteDatabase *)arg1;

@optional

+ (NSString *)columnNameForSortIdentifier:(NSString *)arg1;

@end