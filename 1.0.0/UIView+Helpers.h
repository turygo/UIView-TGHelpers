//
//  UIView+Helpers.h
//
//  Created by Andrew Carter on 11/9/11.

#import <UIKit/UIKit.h>

@interface UIView (Helpers)

//Alignment
- (void)centerAlignHorizontalForView:(UIView *)view;
- (void)centerAlignVerticalForView:(UIView *)view;
- (void)centerAlignHorizontalForSuperView;
- (void)centerAlignVerticalForSuperView;
- (void)leftAlignForView:(UIView *)view;
- (void)rightAlignForView:(UIView *)view;
- (void)centerAlignForView:(UIView *)view;
- (void)centerAlignForSuperview;

//Convenience Getters
- (CGFloat)frameOriginX;
- (CGFloat)frameOriginY;
- (CGFloat)frameSizeWidth;
- (CGFloat)frameSizeHeight;

//Frame Adjustments
- (void)setFrameOriginY:(CGFloat)y;
- (void)setFrameOriginX:(CGFloat)x;
- (void)setFrameSizeWidth:(CGFloat)width;
- (void)setFrameSizeHeight:(CGFloat)height;

//Positioning Relative to View
- (void)setFrameOriginYBelowView:(UIView *)view;
- (void)setFrameOriginYAboveView:(UIView *)view;
- (void)setFrameOriginXRightOfView:(UIView *)view;
- (void)setFrameOriginXLeftOfView:(UIView *)view;

- (void)setFrameOriginYBelowView:(UIView *)view offset:(CGFloat)offset;
- (void)setFrameOriginYAboveView:(UIView *)view offset:(CGFloat)offset;
- (void)setFrameOriginXRightOfView:(UIView *)view offset:(CGFloat)offset;
- (void)setFrameOriginXLeftOfView:(UIView *)view offset:(CGFloat)offset;

//Resizing
- (void)setFrameSizeToImageSize;

//Making rounded corners
- (void)roundCornersTopLeft:(CGFloat)topLeft topRight:(CGFloat)topRight bottomLeft:(CGFloat)bottomLeft bottomRight:(CGFloat)bottomRight;
static inline UIImage* createRoundedCornerMask(CGRect rect, CGFloat radius_tl, CGFloat radius_tr, CGFloat radius_bl, CGFloat radius_br);

@end