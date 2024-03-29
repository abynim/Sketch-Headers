//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchRendering/NSCopying-Protocol.h>
#import <SketchRendering/NSMutableCopying-Protocol.h>

@class MSImmutableDocumentData, MSOverlayItemContainer, MSOverlaySettings, NSDictionary;
@protocol MSRenderingContextCacheProvider;

@interface MSRenderInstruction : NSObject <NSCopying, NSMutableCopying>
{
    MSImmutableDocumentData *_documentData;
    NSDictionary *_detachedInstances;
    struct MSRenderingParameters _renderingParameters;
    id <MSRenderingContextCacheProvider> _cacheProvider;
    struct CGColorSpace *_colorSpace;
    MSOverlaySettings *_overlaySettings;
    MSOverlayItemContainer *_overlayItemContainer;
    unsigned long long _overlayOptions;
    NSDictionary *_overlayItemImages;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *overlayItemImages; // @synthesize overlayItemImages=_overlayItemImages;
@property(readonly, nonatomic) MSOverlayItemContainer *overlayItemContainer; // @synthesize overlayItemContainer=_overlayItemContainer;
@property(readonly, nonatomic) MSOverlaySettings *overlaySettings; // @synthesize overlaySettings=_overlaySettings;
@property(readonly, nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly, nonatomic) id <MSRenderingContextCacheProvider> cacheProvider; // @synthesize cacheProvider=_cacheProvider;
@property(readonly, nonatomic) struct MSRenderingParameters renderingParameters; // @synthesize renderingParameters=_renderingParameters;
@property(readonly, nonatomic) NSDictionary *detachedInstances; // @synthesize detachedInstances=_detachedInstances;
@property(readonly, nonatomic) MSImmutableDocumentData *documentData; // @synthesize documentData=_documentData;
- (BOOL)isEqualToRenderInstruction:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)asDictionary_;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithDocumentData:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 cacheProvider:(id)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (unsigned long long)traitsDifferingWithInstruction:(id)arg1;

@end

