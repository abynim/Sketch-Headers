#import "NSObject.h"

@interface MSSliceMaker : NSObject
{
}

+ (void)configureSliceOptions:(id)arg1 forLayer:(id)arg2 layerOptions:(unsigned long long)arg3 includedIDs:(id)arg4;
+ (void)configureSliceOptions:(id)arg1 forLayer:(id)arg2;
+ (id)sliceFromExportSize:(id)arg1 layer:(id)arg2 inRect:(struct CGRect)arg3;
+ (id)slicesFromExportableLayer:(id)arg1 sizes:(id)arg2 inRect:(struct CGRect)arg3;
+ (id)slicesFromExportableLayer:(id)arg1 inRect:(struct CGRect)arg2;
+ (id)slicesFromExportableLayer:(id)arg1 sizes:(id)arg2;
+ (id)slicesFromExportableLayer:(id)arg1;

@end

