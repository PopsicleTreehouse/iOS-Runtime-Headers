/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableIndexSet, NSMutableArray;

@interface PLAlbumViewCell : UITableViewCell  {
    struct CGSize { 
        float width; 
        float height; 
    } _cellPhotoSize;
    struct CGSize { 
        float width; 
        float height; 
    } _cellPhotoThumbnailSize;
    struct CGPoint { 
        float x; 
        float y; 
    } _cellPhotoThumbnailOffset;
    unsigned int _cellPhotoCount;
    struct CGImage { } *_cellsImage;
    BOOL _usesViewBasedPhotoCells;
    NSMutableArray *_photoCellViews;
    NSMutableIndexSet *_selectionIndexes;
    NSMutableIndexSet *_badgedIndexes;
    NSMutableIndexSet *_activityIndexes;
    NSMutableArray *_highlightViews;
    NSMutableArray *_textBadgeViews;
    int _selectionStyle;
}

@property struct CGSize { float x1; float x2; } cellPhotoSize;
@property struct CGSize { float x1; float x2; } cellPhotoThumbnailSize;
@property struct CGPoint { float x1; float x2; } cellPhotoThumbnailOffset;
@property unsigned int cellPhotoCount;
@property BOOL usesViewBasedPhotoCells;
@property int photoSelectionStyle;

+ (unsigned int)cellPhotoIndexAtPoint:(struct CGPoint { float x1; float x2; })arg1 cellBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 cellPhotoSize:(struct CGSize { float x1; float x2; })arg3;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfCellPhotoAtIndex:(unsigned int)arg1 cellBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 cellPhotoSize:(struct CGSize { float x1; float x2; })arg3;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfPhotoThumbnailAtIndex:(unsigned int)arg1 cellBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 cellPhotoSize:(struct CGSize { float x1; float x2; })arg3 thumbnailSize:(struct CGSize { float x1; float x2; })arg4 thumbnailOffset:(struct CGPoint { float x1; float x2; })arg5;

- (void)dealloc;
- (void)setCGImageRef:(struct CGImage { }*)arg1;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (struct CGPoint { float x1; float x2; })cellPhotoThumbnailOffset;
- (struct CGSize { float x1; float x2; })cellPhotoThumbnailSize;
- (struct CGImage { }*)cgImageRef;
- (BOOL)usesViewBasedPhotoCells;
- (void)_setCellPhotoAtIndex:(unsigned int)arg1 highlighted:(BOOL)arg2 badgedWithImage:(id)arg3 showActivityIndicator:(BOOL)arg4;
- (void)_updateHighlightAndBadgeForCellPhotoAtIndex:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })cellPhotoSize;
- (void)_updatePhotoCells;
- (void)_removePhotoCellViews;
- (void)removeAllHighlights;
- (void)setCellPhotoCount:(unsigned int)arg1;
- (void)setCellPhotoThumbnailSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setCellPhotoSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfCellPhotoAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfPhotoThumbnailAtIndex:(unsigned int)arg1;
- (void)replaceCellPhotoViewAtIndex:(unsigned int)arg1 withCellPhotoView:(id)arg2;
- (id)viewOfCellPhotoAtIndex:(unsigned int)arg1;
- (id)removeCellPhotoViewAtIndex:(unsigned int)arg1;
- (void)removeAllTextBadges;
- (void)setUsesViewBasedPhotoCells:(BOOL)arg1;
- (void)showActivityOnCellPhotoAtIndex:(unsigned int)arg1;
- (void)hideActivityOnCellPhotoAtIndex:(unsigned int)arg1;
- (unsigned int)cellPhotoIndexAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTextBadgeString:(id)arg1 onCellPhotoAtIndex:(unsigned int)arg2;
- (void)deselectCellPhotoAtIndex:(unsigned int)arg1;
- (void)selectCellPhotoAtIndex:(unsigned int)arg1;
- (void)debadgeCellPhotoAtIndex:(unsigned int)arg1;
- (void)badgeCellPhotoAtIndex:(unsigned int)arg1;
- (unsigned int)cellPhotoCount;
- (void)setCellPhotoThumbnailOffset:(struct CGPoint { float x1; float x2; })arg1;
- (int)photoSelectionStyle;
- (void)setPhotoSelectionStyle:(int)arg1;

@end
