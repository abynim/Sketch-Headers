#import "MSRenderingContext.h"

@class MSExportRequest;

@interface MSExportRenderingContext : MSRenderingContext
{
    MSExportRequest *_exportRequest;
}

@property(retain, nonatomic) MSExportRequest *exportRequest; // @synthesize exportRequest=_exportRequest;
- (void).cxx_destruct;
- (BOOL)isExporting;
- (BOOL)rendererShouldSkipDrawingLayer:(id)arg1;
- (BOOL)shouldDrawLayer:(id)arg1 withMaskingShapeGroup:(id)arg2 ignoreDirtyRect:(BOOL)arg3;

@end

