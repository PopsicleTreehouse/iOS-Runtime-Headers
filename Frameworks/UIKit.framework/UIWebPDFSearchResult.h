/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSArray;

@interface UIWebPDFSearchResult : NSObject  {
    NSArray *rotationAngles;
    unsigned int pageIndex;
    NSArray *strings;
    NSString *string;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } boundingBox;
    NSArray *rects;
}

@property unsigned int pageIndex;
@property(retain) NSString * string;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } boundingBox;
@property(retain) NSArray * strings;
@property(retain) NSArray * rects;
@property(retain) NSArray * rotationAngles;


- (id)string;
- (void)setString:(id)arg1;
- (void)setBoundingBox:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPageIndex:(unsigned int)arg1;
- (void)setRotationAngles:(id)arg1;
- (unsigned int)pageIndex;
- (id)rotationAngles;
- (id)rects;
- (void)setRects:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBox;
- (id)strings;
- (void)setStrings:(id)arg1;

@end
