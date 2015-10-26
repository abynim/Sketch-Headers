#import "_MSStyleBorderOptions.h"

@interface MSStyleBorderOptions : _MSStyleBorderOptions
{
}

@property(readonly, nonatomic) BOOL hasDashPattern;
- (void)multiplyBy:(double)arg1;
- (BOOL)supportsAdvancedBorderSettings;
- (void)addSVGAttributes:(id)arg1 forExporter:(id)arg2;

@end

