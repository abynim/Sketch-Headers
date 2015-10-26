#import "NSObject.h"

@class NSMenu;

@interface MSNormalEventContextualMenuBuilder : NSObject
{
    NSMenu *_standardLayerMenu;
    NSMenu *_textLayerMenu;
    NSMenu *_groupLayerMenu;
    NSMenu *_multipleSelectionMenu;
    NSMenu *_noSelectionMenu;
    NSMenu *_imageLayerMenu;
    NSMenu *_symbolLayerMenu;
    NSMenu *_artboardAndSlicesMenu;
}

@property(retain, nonatomic) NSMenu *artboardAndSlicesMenu; // @synthesize artboardAndSlicesMenu=_artboardAndSlicesMenu;
@property(retain, nonatomic) NSMenu *symbolLayerMenu; // @synthesize symbolLayerMenu=_symbolLayerMenu;
@property(retain, nonatomic) NSMenu *imageLayerMenu; // @synthesize imageLayerMenu=_imageLayerMenu;
@property(retain, nonatomic) NSMenu *noSelectionMenu; // @synthesize noSelectionMenu=_noSelectionMenu;
@property(retain, nonatomic) NSMenu *multipleSelectionMenu; // @synthesize multipleSelectionMenu=_multipleSelectionMenu;
@property(retain, nonatomic) NSMenu *groupLayerMenu; // @synthesize groupLayerMenu=_groupLayerMenu;
@property(retain, nonatomic) NSMenu *textLayerMenu; // @synthesize textLayerMenu=_textLayerMenu;
@property(retain, nonatomic) NSMenu *standardLayerMenu; // @synthesize standardLayerMenu=_standardLayerMenu;
- (void).cxx_destruct;
- (id)symbolOnlyItems;
- (id)groupOnlyItems;
- (id)imageOnlyItems;
- (id)textOnlyItems;
- (id)noSelectionItems;
- (id)distributeItems;
- (id)alignItems;
- (id)lockHideItems;
- (id)maskItems;
- (id)transformItems;
- (id)groupRenameItems;
- (id)pasteCopyStyleItems;
- (id)moveForwardBackwardItems;
- (id)pickLayerItems;
- (id)cutCopyPasteItems;
- (id)menuWithItemGroups:(id)arg1;
- (id)standardMenuItemGroups;
- (void)constructMenus;
- (id)menuForLayers:(id)arg1;

@end

