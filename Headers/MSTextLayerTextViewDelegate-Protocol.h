//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSTextLayerTextView, NSColorSpace;

@protocol MSTextLayerTextViewDelegate <NSObject>
- (BOOL)shouldUseCustomBaselineForTextLayerTextView:(MSTextLayerTextView *)arg1;
- (NSColorSpace *)documentColorSpaceForTextLayerTextView:(MSTextLayerTextView *)arg1;
- (NSColorSpace *)canvasColorSpaceForTextLayerTextView:(MSTextLayerTextView *)arg1;
@end

