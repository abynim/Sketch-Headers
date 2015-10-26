#import "CHViewController.h"

@class NSArray, NSButton, NSComboBox, NSPopUpButton, NSView;

@interface MSExportSizeViewController : CHViewController
{
    NSPopUpButton *_formatPopup;
    NSButton *_removeSizeButton;
    NSView *_sizeView;
    NSView *_scaleView;
    NSArray *_exportSizes;
    NSComboBox *_scaleField;
}

@property(retain, nonatomic) NSComboBox *scaleField; // @synthesize scaleField=_scaleField;
@property(retain, nonatomic) NSArray *exportSizes; // @synthesize exportSizes=_exportSizes;
@property(retain, nonatomic) NSView *scaleView; // @synthesize scaleView=_scaleView;
@property(retain, nonatomic) NSView *sizeView; // @synthesize sizeView=_sizeView;
@property(retain, nonatomic) NSButton *removeSizeButton; // @synthesize removeSizeButton=_removeSizeButton;
@property(retain, nonatomic) NSPopUpButton *formatPopup; // @synthesize formatPopup=_formatPopup;
- (void).cxx_destruct;
- (void)scaleFieldAction:(id)arg1;
- (void)formatPopupAction:(id)arg1;
- (void)removeExportSize:(id)arg1;
- (id)firstSize;
- (void)prepare;

@end

