#import "NSTextFieldCell.h"

@interface MSArtboardPresetCell : NSTextFieldCell
{
    BOOL _isSelected;
    struct CGSize _presetSize;
}

@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) struct CGSize presetSize; // @synthesize presetSize=_presetSize;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

