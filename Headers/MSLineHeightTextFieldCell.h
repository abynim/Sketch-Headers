#import "NSTextFieldCell.h"

@interface MSLineHeightTextFieldCell : NSTextFieldCell
{
    BOOL _forceNormalDraw;
    double _autoValue;
}

@property(nonatomic) BOOL forceNormalDraw; // @synthesize forceNormalDraw=_forceNormalDraw;
@property(nonatomic) double autoValue; // @synthesize autoValue=_autoValue;
- (BOOL)textFieldIsFirstResponder:(id)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

