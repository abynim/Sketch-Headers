//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSControl.h>

@class NSArray, NSImageView;

@interface MSWorkspaceWindowGridItemView : NSControl
{
    // Error parsing type: , name: overlayEnabled
    // Error parsing type: , name: $__lazy_storage_$_imageView
    // Error parsing type: , name: $__lazy_storage_$_topLeftImageView
    // Error parsing type: , name: $__lazy_storage_$_topRightImageView
    // Error parsing type: , name: $__lazy_storage_$_bottomLeftImageView
    // Error parsing type: , name: $__lazy_storage_$_bottomRightImageView
    // Error parsing type: , name: $__lazy_storage_$_borderView
    // Error parsing type: , name: $__lazy_storage_$_overlayView
    // Error parsing type: , name: contentInset
    // Error parsing type: , name: gridItemSize
    // Error parsing type: , name: borderWidth
    // Error parsing type: , name: borderRadius
    // Error parsing type: , name: selected
    // Error parsing type: , name: iconCount
    // Error parsing type: , name: imageAlphaValue
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) double imageAlphaValue; // @synthesize imageAlphaValue;
@property(nonatomic) long long iconCount; // @synthesize iconCount;
@property(nonatomic) BOOL selected; // @synthesize selected;
@property(nonatomic, readonly) NSArray *gridImageViews;
@property(nonatomic, retain) NSImageView *bottomRightImageView;
@property(nonatomic, retain) NSImageView *bottomLeftImageView;
@property(nonatomic, retain) NSImageView *topRightImageView;
@property(nonatomic, retain) NSImageView *topLeftImageView;
@property(nonatomic, retain) NSImageView *imageView;
@property(nonatomic) BOOL overlayEnabled; // @synthesize overlayEnabled;

@end

