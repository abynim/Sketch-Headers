#import "MSGridSheetBase.h"

@class NSButton;

@interface MSLayoutSheet : MSGridSheetBase
{
    NSButton *_centerGridButton;
}

@property(retain, nonatomic) NSButton *centerGridButton; // @synthesize centerGridButton=_centerGridButton;
- (void).cxx_destruct;
- (void)offsetChanged:(id)arg1;
- (void)centerGrid:(id)arg1;
- (void)setAsDefault:(id)arg1;
- (void)awakeFromNib;
- (void)applyObject:(id)arg1 toLayer:(id)arg2;
- (id)defaultObject;
- (id)cacheObjectForRootLayer:(id)arg1;

@end

