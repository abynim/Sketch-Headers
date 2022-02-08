//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSArtboardTitleRenderer, MSFlowRenderer, MSGPUArtboardShadow, MSMetalBuffer, MSMetalRenderer, MSMetalTexture, MSRasterSurface;
@protocol OS_os_log;

@interface MSOverlayRenderer : NSObject
{
    NSObject<OS_os_log> *_log;
    MSMetalRenderer *_renderer;
    MSRasterSurface *_quartzOverlaySurface;
    MSMetalTexture *_ekranoplanOverlayTexture;
    MSFlowRenderer *_flowRenderer;
    MSGPUArtboardShadow *_artboardShadow;
    MSArtboardTitleRenderer *_artboardTitleRenderer;
    MSMetalBuffer *_sliceBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSMetalBuffer *sliceBuffer; // @synthesize sliceBuffer=_sliceBuffer;
@property(readonly, nonatomic) MSArtboardTitleRenderer *artboardTitleRenderer; // @synthesize artboardTitleRenderer=_artboardTitleRenderer;
@property(readonly, nonatomic) MSGPUArtboardShadow *artboardShadow; // @synthesize artboardShadow=_artboardShadow;
@property(readonly, nonatomic) MSFlowRenderer *flowRenderer; // @synthesize flowRenderer=_flowRenderer;
@property(retain, nonatomic) MSMetalTexture *ekranoplanOverlayTexture; // @synthesize ekranoplanOverlayTexture=_ekranoplanOverlayTexture;
@property(retain, nonatomic) MSRasterSurface *quartzOverlaySurface; // @synthesize quartzOverlaySurface=_quartzOverlaySurface;
@property(readonly, nonatomic) MSMetalRenderer *renderer; // @synthesize renderer=_renderer;
- (void)drawOverlayForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 overlaySettings:(id)arg3 canvasColorSpace:(struct CGColorSpace *)arg4 overlayTexture:(id)arg5 flowItems:(id)arg6 renderingCache:(id)arg7;
- (void)_renderArtboardTitlesForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 overlaySettings:(id)arg3 renderingCache:(id)arg4;
- (void)_renderSlicesForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 overlaySettings:(id)arg3 canvasColorSpace:(struct CGColorSpace *)arg4 renderingCache:(id)arg5;
- (id)_createSliceBufferForPage:(id)arg1 rect:(struct CGRect)arg2 renderingParameters:(struct MSRenderingParameters)arg3 overlaySettings:(id)arg4 canvasColorSpace:(struct CGColorSpace *)arg5;
- (void)_renderViewportGuidesForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 overlaySettings:(id)arg3 renderingCache:(id)arg4;
- (id)_createViewportGuidesBufferForPage:(id)arg1 rect:(struct CGRect)arg2 renderingParameters:(struct MSRenderingParameters)arg3;
- (void)_renderFlowItems:(id)arg1 page:(id)arg2 renderingParameters:(struct MSRenderingParameters)arg3 overlaySettings:(id)arg4 renderingCache:(id)arg5;
- (id)_makeFlowRendererSettings:(id)arg1 parameters:(struct MSRenderingParameters)arg2;
- (void)_drawGuidesForGroup:(id)arg1 rect:(struct CGRect)arg2 totalZoom:(double)arg3 backingScaleFactor:(double)arg4 baseOrigin:(struct CGPoint)arg5 overlaySettings:(id)arg6 renderingCache:(id)arg7;
- (id)_createGuideBufferForGroup:(id)arg1 rect:(struct CGRect)arg2 totalZoom:(double)arg3 backingScaleFactor:(double)arg4 baseOrigin:(struct CGPoint)arg5 overlaySettings:(id)arg6;
- (void)_drawGridForGroup:(id)arg1 rect:(struct CGRect)arg2 totalZoom:(double)arg3 backingScaleFactor:(double)arg4 baseOrigin:(struct CGPoint)arg5 overlaySettings:(id)arg6;
- (void)_renderGridsAndGuidesForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 overlaySettings:(id)arg3 renderingCache:(id)arg4;
- (id)_createArtboardShadowBufferForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2;
- (void)_drawArtboardShadowsForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 overlaySettings:(id)arg3 renderingCache:(id)arg4;
- (id)_createPageBackgroundBufferForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2;
- (void)drawBackgroundElementsForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 totalZoom:(double)arg3 renderingCache:(id)arg4;
- (void)_drawOverlayTexture:(id)arg1;
- (id)overlayTextureForPage:(id)arg1 overlayItems:(id)arg2 renderingParameters:(struct MSRenderingParameters)arg3 flowItems:(id)arg4 overlayItemImages:(id)arg5 overlayOptions:(unsigned long long)arg6 colorSpace:(struct CGColorSpace *)arg7;
- (id)_quartzOverlaySurfaceForPixelViewSize:(struct CGSize)arg1;
- (id)_overlayTextureWithSize:(struct CGSize)arg1;
- (id)initWithRenderer:(id)arg1;

@end

