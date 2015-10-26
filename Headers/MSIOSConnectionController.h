#import "NSObject.h"

#import "NSMenuDelegate.h"

@class BCBonjourController, MSArtboardGroup, MSDocument, NSMenu, NSString;

@interface MSIOSConnectionController : NSObject <NSMenuDelegate>
{
    BCBonjourController *_bonjourController;
    NSMenu *_connectionMenu;
    MSDocument *_currentDocument;
    MSArtboardGroup *_currentArtboard;
}

+ (BOOL)sketchPlayDebugEnabled;
+ (BOOL)sketchPlayEnabled;
@property(retain, nonatomic) MSArtboardGroup *currentArtboard; // @synthesize currentArtboard=_currentArtboard;
@property(retain, nonatomic) MSDocument *currentDocument; // @synthesize currentDocument=_currentDocument;
@property(retain, nonatomic) NSMenu *connectionMenu; // @synthesize connectionMenu=_connectionMenu;
@property(retain, nonatomic) BCBonjourController *bonjourController; // @synthesize bonjourController=_bonjourController;
- (void).cxx_destruct;
- (void)handleCommandErrorWithReceiver:(id)arg1 message:(id)arg2;
- (void)handleCommandShowingWithReceiver:(id)arg1 message:(id)arg2;
- (void)handleCommandSystemWithReceiver:(id)arg1 message:(id)arg2;
- (id)labelForConnectionButton;
- (id)tooltipForConnectionButton;
- (id)imageNameForConnectionButton;
- (void)connectoToDefaultDeviceWithDocument:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)sendDebug:(id)arg1;
- (void)resetArtboards:(id)arg1;
- (void)refreshArtboards:(id)arg1;
- (void)disconnectAll:(id)arg1;
- (void)connectAll:(id)arg1;
- (void)connectToDevice:(id)arg1;
- (void)setCurrentDocumentFromActionSender:(id)arg1;
- (void)populateConnectionMenu:(id)arg1;
- (void)sendListOfPagesAndSlicesForDocument:(id)arg1;
- (void)sendSlice:(id)arg1 page:(id)arg2 artboard:(id)arg3;
- (id)scalesNeededForArtboard:(id)arg1 clients:(id)arg2;
- (void)clientsChangedNotification:(id)arg1;
- (void)documentWillCloseNotification:(id)arg1;
- (void)documentChangedNotification:(id)arg1;
- (void)artboardSelectedNotification:(id)arg1;
- (void)artboardsChangedNotification:(id)arg1;
- (void)pagesChangedNotification:(id)arg1;
- (void)stopListeningForNotifications;
- (void)listenForNotifications;
- (BOOL)hasMultipleClients;
- (BOOL)hasClients;
- (BOOL)gotConnections;
- (void)setupBonjourController;
- (void)dealloc;
- (id)init;
- (void)setSketchPlayUsed;
- (BOOL)sketchPlayUsed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

