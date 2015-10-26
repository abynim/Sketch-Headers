#import "NSViewController.h"

#import "BCPopoverContentController.h"

@class MSTextLayerSection, NSArray, NSPopUpButton, NSSegmentedControl, NSString;

@interface MSParagraphStyleViewController : NSViewController <BCPopoverContentController>
{
    MSTextLayerSection *_textSection;
    NSArray *_layers;
    NSSegmentedControl *_decorationButton;
    NSPopUpButton *_listPopUpButton;
}

@property(retain, nonatomic) NSPopUpButton *listPopUpButton; // @synthesize listPopUpButton=_listPopUpButton;
@property(retain, nonatomic) NSSegmentedControl *decorationButton; // @synthesize decorationButton=_decorationButton;
@property(retain, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(nonatomic) __weak MSTextLayerSection *textSection; // @synthesize textSection=_textSection;
- (void).cxx_destruct;
- (id)firstOccurrenceOfAttributeWithName:(id)arg1;
- (void)changeFontPropertiesOfTextObjectsInBlock:(CDUnknownBlockType)arg1;
- (long long)indexForBulletListName:(id)arg1;
- (id)markerForBulletListIndex:(long long)arg1;
- (void)listPopUpAction:(id)arg1;
- (void)decorationButtonAction:(id)arg1;
- (void)prepareBulletListPopUpButton;
- (void)prepareDecorationButton;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

