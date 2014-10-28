/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPLikeInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int likeCount : 1; 
        unsigned int likedByCurrentUser : 1; 
    } _has;
    int _likeCount;
    BOOL _likedByCurrentUser;
}

@property BOOL hasLikeCount;
@property BOOL hasLikedByCurrentUser;
@property int likeCount;
@property BOOL likedByCurrentUser;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLikeCount;
- (BOOL)hasLikedByCurrentUser;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)likeCount;
- (BOOL)likedByCurrentUser;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasLikeCount:(BOOL)arg1;
- (void)setHasLikedByCurrentUser:(BOOL)arg1;
- (void)setLikeCount:(int)arg1;
- (void)setLikedByCurrentUser:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end