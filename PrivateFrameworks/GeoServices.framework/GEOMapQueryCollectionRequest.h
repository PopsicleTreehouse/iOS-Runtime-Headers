/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOMapQueryCollectionRequest : PBRequest  {
    NSMutableArray *_requestElements;
}

@property(retain) NSMutableArray * requestElements;


- (id)description;
- (void)dealloc;
- (Class)responseClass;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (id)requestElements;
- (id)requestElementsAtIndex:(unsigned int)arg1;
- (unsigned int)requestElementsCount;
- (void)addRequestElements:(id)arg1;
- (void)setRequestElements:(id)arg1;

@end
