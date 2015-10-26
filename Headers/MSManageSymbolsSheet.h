#import "CHSheetController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSImage, NSMutableDictionary, NSString, NSTableView;

@interface MSManageSymbolsSheet : CHSheetController <NSTableViewDataSource, NSTableViewDelegate>
{
    NSTableView *_symbolsTableView;
    NSTableView *_layerStylesTableView;
    NSTableView *_textStylesTableView;
    NSImage *_blankImage;
    NSMutableDictionary *_symbolPreviews;
    NSMutableDictionary *_layerStylePreviews;
}

@property(retain, nonatomic) NSMutableDictionary *layerStylePreviews; // @synthesize layerStylePreviews=_layerStylePreviews;
@property(retain, nonatomic) NSMutableDictionary *symbolPreviews; // @synthesize symbolPreviews=_symbolPreviews;
@property(retain, nonatomic) NSImage *blankImage; // @synthesize blankImage=_blankImage;
@property(retain, nonatomic) NSTableView *textStylesTableView; // @synthesize textStylesTableView=_textStylesTableView;
@property(retain, nonatomic) NSTableView *layerStylesTableView; // @synthesize layerStylesTableView=_layerStylesTableView;
@property(retain, nonatomic) NSTableView *symbolsTableView; // @synthesize symbolsTableView=_symbolsTableView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)doc;
- (id)containerForTableView:(id)arg1;
- (id)previewForSharedObjectInTableView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)generatePreviewSharedObject:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)deleteSelectedObjectInTableView:(id)arg1;
- (void)deleteTextStyle:(id)arg1;
- (void)deleteLayerStyle:(id)arg1;
- (void)deleteSymbol:(id)arg1;
- (id)sharedObjectForTableView:(id)arg1 atIndex:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)generateSymbolsForTableView:(id)arg1 imageArray:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

