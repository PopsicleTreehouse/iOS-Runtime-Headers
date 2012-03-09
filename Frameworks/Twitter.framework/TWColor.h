/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Twitter.framework/Twitter
 */

@interface TWColor : NSObject  {
    struct CGColor { } *_colorRef;
}

+ (id)colorWithWhite:(float)arg1 alpha:(float)arg2;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)clearColor;
+ (id)grayColor;
+ (id)whiteColor;

- (void)dealloc;
- (void)setCGColor:(struct CGColor { }*)arg1;
- (void)setOnContext:(struct CGContext { }*)arg1;
- (struct CGColor { }*)CGColor;

@end
