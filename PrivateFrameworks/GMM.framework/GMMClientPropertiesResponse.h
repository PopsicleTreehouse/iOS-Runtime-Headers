/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;

@interface GMMClientPropertiesResponse : PBCodable  {
    NSString *_replacementCohort;
}

@property(readonly) BOOL hasReplacementCohort;
@property(retain) NSString * replacementCohort;


- (id)description;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)hasReplacementCohort;
- (void)setReplacementCohort:(id)arg1;
- (id)replacementCohort;

@end
