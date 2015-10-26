#import "MSPreferencePane.h"

@class NSButton;

@interface MSCanvasPerferencePane : MSPreferencePane
{
    NSButton *_scaleDownForRetinaButton;
}

+ (id)toolbarIcon;
+ (id)title;
+ (id)identifier;
@property(retain, nonatomic) NSButton *scaleDownForRetinaButton; // @synthesize scaleDownForRetinaButton=_scaleDownForRetinaButton;
- (void).cxx_destruct;
- (void)adjustColorsAction:(id)arg1;
- (void)scaleDownForRetinaAction:(id)arg1;
- (void)awakeFromNib;

@end

