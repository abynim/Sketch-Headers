#import "NSViewController.h"

@class NSView;

@interface MSSliceExportOptions : NSViewController
{
    NSView *_optionsViewJPG;
    NSView *_optionsViewSaveForWeb;
}

+ (id)exportOptions;
@property(retain, nonatomic) NSView *optionsViewSaveForWeb; // @synthesize optionsViewSaveForWeb=_optionsViewSaveForWeb;
@property(retain, nonatomic) NSView *optionsViewJPG; // @synthesize optionsViewJPG=_optionsViewJPG;
- (void).cxx_destruct;
- (void)setExtensions:(id)arg1;

@end

