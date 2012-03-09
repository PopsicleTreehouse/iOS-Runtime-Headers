/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString, NSMutableArray;

@interface LBSAddress : PBCodable  {
    NSString *_rawText;
    NSMutableArray *_components;
    BOOL _hasIsPhysical;
    BOOL _isPhysical;
    BOOL _hasIsMailing;
    BOOL _isMailing;
    NSMutableArray *_crossStreets;
}

@property(readonly) BOOL hasRawText;
@property(retain) NSString * rawText;
@property(retain) NSMutableArray * components;
@property BOOL hasIsPhysical;
@property BOOL isPhysical;
@property BOOL hasIsMailing;
@property BOOL isMailing;
@property(retain) NSMutableArray * crossStreets;


- (id)components;
- (id)description;
- (void)dealloc;
- (void)setComponents:(id)arg1;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)crossStreets;
- (BOOL)isMailing;
- (void)setHasIsMailing:(BOOL)arg1;
- (BOOL)hasIsMailing;
- (BOOL)isPhysical;
- (void)setHasIsPhysical:(BOOL)arg1;
- (BOOL)hasIsPhysical;
- (id)rawText;
- (id)crossStreetAtIndex:(unsigned int)arg1;
- (unsigned int)crossStreetsCount;
- (id)componentAtIndex:(unsigned int)arg1;
- (unsigned int)componentsCount;
- (BOOL)hasRawText;
- (void)addCrossStreet:(id)arg1;
- (void)setIsMailing:(BOOL)arg1;
- (void)setIsPhysical:(BOOL)arg1;
- (void)addComponent:(id)arg1;
- (void)setCrossStreets:(id)arg1;
- (void)setRawText:(id)arg1;

@end
