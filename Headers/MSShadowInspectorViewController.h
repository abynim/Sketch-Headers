#import "MSStylePartInspectorViewController.h"

@class MSColorPreviewButton, MSUpDownTextField, NSString;

@interface MSShadowInspectorViewController : MSStylePartInspectorViewController
{
    NSString *_type;
    MSUpDownTextField *_xOffsetField;
    MSUpDownTextField *_yOffsetField;
    MSUpDownTextField *_blurRadiusField;
    MSUpDownTextField *_spreadField;
    MSColorPreviewButton *_colorButton;
}

@property(retain, nonatomic) MSColorPreviewButton *colorButton; // @synthesize colorButton=_colorButton;
@property(retain, nonatomic) MSUpDownTextField *spreadField; // @synthesize spreadField=_spreadField;
@property(retain, nonatomic) MSUpDownTextField *blurRadiusField; // @synthesize blurRadiusField=_blurRadiusField;
@property(retain, nonatomic) MSUpDownTextField *yOffsetField; // @synthesize yOffsetField=_yOffsetField;
@property(retain, nonatomic) MSUpDownTextField *xOffsetField; // @synthesize xOffsetField=_xOffsetField;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didGetAddedToInspector;
- (id)sectionTitle;
- (id)title;
- (id)keyPath;
- (BOOL)isSpreadFieldAvailable;
- (void)prepare;

@end

