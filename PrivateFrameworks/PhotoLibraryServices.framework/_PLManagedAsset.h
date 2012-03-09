/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDate, NSNumber, NSMutableSet, NSManagedObject, NSString, NSObject, NSData, NSSet;

@interface _PLManagedAsset : PLManagedObject  {
}

@property(retain) NSNumber * savedAssetType;
@property(retain) NSString * uuid;
@property(retain) NSNumber * kind;
@property short kindValue;
@property(retain) NSDate * modificationDate;
@property(retain) NSNumber * highDynamicRangeType;
@property(retain) NSNumber * width;
@property short widthValue;
@property(retain) NSDate * dateCreated;
@property double sortToken;
@property(retain) NSString * directory;
@property(retain) NSString * filename;
@property(retain) NSString * originalFilename;
@property(retain) NSObject * faceRectangles;
@property(retain) NSData * locationData;
@property(retain) NSString * uniformTypeIdentifier;
@property(retain) NSNumber * originalOrientation;
@property short originalOrientationValue;
@property(retain) NSNumber * originalFilesize;
@property int originalFilesizeValue;
@property(retain) NSString * originalPath;
@property(retain) NSString * importSessionID;
@property(retain) NSString * title;
@property(retain) NSNumber * orientation;
@property short orientationValue;
@property(retain) NSNumber * duration;
@property double durationValue;
@property(retain) NSNumber * flagged;
@property BOOL flaggedValue;
@property(retain) NSNumber * height;
@property short heightValue;
@property(retain) NSSet * albumsBeingKeyAssetFor;
@property(readonly) NSMutableSet * albumsBeingKeyAssetForSet;
@property(retain) NSSet * sidecarFiles;
@property(readonly) NSMutableSet * sidecarFilesSet;
@property(retain) NSSet * albums;
@property(readonly) NSMutableSet * albumsSet;
@property(retain) NSNumber * complete;
@property BOOL completeValue;
@property(retain) NSManagedObject * additionalAttributes;
@property(retain) NSString * creatorBundleID;
@property(retain) NSNumber * originalHeight;
@property short originalHeightValue;
@property(retain) NSNumber * originalWidth;
@property short originalWidthValue;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityName;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)insertInManagedObjectContext:(id)arg1;

- (id)sidecarFilesSet;
- (void)setPrimitiveCompleteValue:(BOOL)arg1;
- (BOOL)primitiveCompleteValue;
- (void)setPrimitiveFlaggedValue:(BOOL)arg1;
- (BOOL)primitiveFlaggedValue;
- (void)setFlaggedValue:(BOOL)arg1;
- (BOOL)flaggedValue;
- (void)setPrimitiveDurationValue:(double)arg1;
- (double)primitiveDurationValue;
- (void)setPrimitiveOrientationValue:(short)arg1;
- (short)primitiveOrientationValue;
- (void)setPrimitiveEmbeddedThumbnailLengthValue:(int)arg1;
- (int)primitiveEmbeddedThumbnailLengthValue;
- (void)setPrimitiveOriginalFilesizeValue:(int)arg1;
- (int)primitiveOriginalFilesizeValue;
- (void)setOriginalFilesizeValue:(int)arg1;
- (int)originalFilesizeValue;
- (void)setPrimitiveEmbeddedThumbnailHeightValue:(short)arg1;
- (short)primitiveEmbeddedThumbnailHeightValue;
- (void)setPrimitiveThumbnailIndexValue:(int)arg1;
- (int)primitiveThumbnailIndexValue;
- (void)setPrimitiveOriginalOrientationValue:(short)arg1;
- (short)primitiveOriginalOrientationValue;
- (void)setOriginalOrientationValue:(short)arg1;
- (void)setPrimitiveEmbeddedThumbnailOffsetValue:(int)arg1;
- (int)primitiveEmbeddedThumbnailOffsetValue;
- (void)setOriginalWidthValue:(short)arg1;
- (void)setOriginalHeightValue:(short)arg1;
- (void)setPrimitiveKindValue:(short)arg1;
- (short)primitiveKindValue;
- (void)setPrimitiveEmbeddedThumbnailWidthValue:(short)arg1;
- (short)primitiveEmbeddedThumbnailWidthValue;
- (void)setPrimitiveHeightValue:(short)arg1;
- (void)setPrimitiveWidthValue:(short)arg1;
- (short)primitiveHeightValue;
- (short)primitiveWidthValue;
- (void)setDurationValue:(double)arg1;
- (void)setOriginalHeight:(id)arg1;
- (void)setOriginalWidth:(id)arg1;
- (void)setOriginalOrientation:(id)arg1;
- (short)originalOrientationValue;
- (short)heightValue;
- (short)widthValue;
- (id)originalFilesize;
- (id)creatorBundleID;
- (id)highDynamicRangeType;
- (id)albumsBeingKeyAssetForSet;
- (void)setKindValue:(short)arg1;
- (id)originalHeight;
- (id)originalWidth;
- (void)setHighDynamicRangeType:(id)arg1;
- (void)setCreatorBundleID:(id)arg1;
- (BOOL)completeValue;
- (id)albumsSet;
- (void)setCompleteValue:(BOOL)arg1;
- (id)duration;
- (void)setDuration:(id)arg1;
- (void)awakeFromInsert;
- (id)objectID;
- (id)originalFilename;
- (id)originalPath;
- (void)setOriginalPath:(id)arg1;
- (id)originalOrientation;
- (short)orientationValue;
- (void)setHeightValue:(short)arg1;
- (void)setWidthValue:(short)arg1;
- (void)setOrientationValue:(short)arg1;
- (void)setOriginalFilename:(id)arg1;
- (void)setOriginalFilesize:(id)arg1;
- (short)originalHeightValue;
- (short)originalWidthValue;
- (double)durationValue;
- (void)setImportSessionID:(id)arg1;
- (id)importSessionID;
- (short)kindValue;

@end
