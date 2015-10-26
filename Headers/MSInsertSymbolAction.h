#import "MSInsertSharedObjectAction.h"

@class NSImage;

@interface MSInsertSymbolAction : MSInsertSharedObjectAction
{
    NSImage *_initialImage;
}

@property(retain, nonatomic) NSImage *initialImage; // @synthesize initialImage=_initialImage;
- (void).cxx_destruct;
- (id)sharedObjectName;
- (id)imageName;
- (id)unsortedSharedObjects;
- (void)menuWillOpen:(id)arg1;
- (BOOL)wouldInsertInASymbol;
- (BOOL)wouldInsertIntoItself:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)menuItemForMenu:(id)arg1 name:(id)arg2 sharedObject:(id)arg3;
- (void)showSharedObjectsSheet:(id)arg1;
- (void)insertSharedObjectInstance:(id)arg1;
- (id)initWithDocument:(id)arg1;

@end

