#import "NSObject.h"

@class MSExportRequest, NSColorSpace;

@interface MSExportRenderer : NSObject
{
    BOOL _isPrinting;
    MSExportRequest *_request;
    NSColorSpace *_colorSpace;
    struct CGRect _bounds;
}

+ (id)exportRendererForRequest:(id)arg1 colorSpace:(id)arg2;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(nonatomic) BOOL isPrinting; // @synthesize isPrinting=_isPrinting;
@property(retain, nonatomic) MSExportRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawSliceBackgroundIfNecessary;
- (id)bitmapImageRep;
- (id)basicBitmapImageRep;
- (void)draw;
- (id)TIFFData;
- (id)PNGData;
- (id)JPGData;
- (id)EPSData;
- (id)image;
- (id)data;
- (struct CGRect)boundsForVectorRender;
- (id)PDFData;

@end

