#import "MSMultipleStylePartInspectorViewController.h"

@class MSTextLabelForUpDownField, NSButton;

@interface MSMultipleShadowInspectorViewController : MSMultipleStylePartInspectorViewController
{
    NSButton *_addStylePartButton;
    MSTextLabelForUpDownField *_xOffsetField;
    MSTextLabelForUpDownField *_yOffsetField;
    MSTextLabelForUpDownField *_blurRadiusField;
    MSTextLabelForUpDownField *_spreadField;
}

@property(retain, nonatomic) MSTextLabelForUpDownField *spreadField; // @synthesize spreadField=_spreadField;
@property(retain, nonatomic) MSTextLabelForUpDownField *blurRadiusField; // @synthesize blurRadiusField=_blurRadiusField;
@property(retain, nonatomic) MSTextLabelForUpDownField *yOffsetField; // @synthesize yOffsetField=_yOffsetField;
@property(retain, nonatomic) MSTextLabelForUpDownField *xOffsetField; // @synthesize xOffsetField=_xOffsetField;
@property(retain, nonatomic) NSButton *addStylePartButton; // @synthesize addStylePartButton=_addStylePartButton;
- (void).cxx_destruct;
- (id)views;
- (void)validateSpecialButtons;
- (id)inspectorForStyleParts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)loadViewControllers;
- (BOOL)shouldHideAddStylePartButton;
- (void)prepare;
- (id)stylePartKeyPath;

@end

