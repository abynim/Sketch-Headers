//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSBitmapLayer.h>

#import <SketchModel/MSImageOwner-Protocol.h>

@class MSImageData;

@interface MSBitmapLayer : _MSBitmapLayer <MSImageOwner>
{
}

+ (unsigned long long)traits;
- (double)scale;
- (void)resizeToOriginalSize;
- (struct CGSize)originalSize;
- (BOOL)isAtOriginalSize;
- (id)NSImage;
@property(readonly, nonatomic) BOOL canReduceImageSize;
- (void)setReducedImage:(id)arg1;
@property(readonly, nonatomic) struct CGSize targetSizeForReduction;
- (void)reduceImageSize;
- (void)replaceImageWithImage:(id)arg1;
- (id)handlerName;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2;
- (void)correctInvalidGamma;
- (id)setupWithLayerBuilderDictionary:(id)arg1;
- (void)applyOverride:(id)arg1 document:(id)arg2;

// Remaining properties
@property(retain, nonatomic) MSImageData *image;

@end

