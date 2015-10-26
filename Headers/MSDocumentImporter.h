#import "NSObject.h"

@class CHProgressSheet, MSContentDrawView, MSLayerGroup, NSArray, NSString, NSURL, NSUndoManager;

@interface MSDocumentImporter : NSObject
{
    MSLayerGroup *_group;
    id <MSImporter> _importer;
    NSURL *_fileURL;
    CHProgressSheet *_sheet;
    NSUndoManager *_undoManager;
    NSString *_name;
    NSArray *_addedLayers;
}

+ (void)importFromURL:(id)arg1 inGroup:(id)arg2 importer:(id)arg3;
@property(retain, nonatomic) NSArray *addedLayers; // @synthesize addedLayers=_addedLayers;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(retain, nonatomic) CHProgressSheet *sheet; // @synthesize sheet=_sheet;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) id <MSImporter> importer; // @synthesize importer=_importer;
@property(retain, nonatomic) MSLayerGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak MSContentDrawView *view; // @dynamic view;
- (id)showProgressSheet;
- (void)importerDidFinish;
- (void)close;
- (void)collapseSinglePage;
- (BOOL)expandPages;
- (void)run;

@end

