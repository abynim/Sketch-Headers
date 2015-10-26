#import "CHSheetController.h"

#import "NSWindowDelegate.h"

@class MSBaseGrid, NSMapTable, NSString;

@interface MSGridSheetBase : CHSheetController <NSWindowDelegate>
{
    NSMapTable *_originalSettings;
    MSBaseGrid *_templateObject;
}

@property(copy, nonatomic) MSBaseGrid *templateObject; // @synthesize templateObject=_templateObject;
@property(retain, nonatomic) NSMapTable *originalSettings; // @synthesize originalSettings=_originalSettings;
- (void).cxx_destruct;
- (void)dealloc;
- (void)confirm:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)gridChanged:(id)arg1;
- (void)refreshCanvas:(id)arg1;
- (void)refreshView;
- (id)buildApplicableRootLayerList;
- (void)awakeFromNib;
- (void)applyTemplateObjectToLayer:(id)arg1;
- (void)applyObject:(id)arg1 toLayer:(id)arg2;
- (id)defaultObject;
- (id)cacheObjectForRootLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

