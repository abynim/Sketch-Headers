#import "NSObject.h"

#import "BITCrashManagerDelegate.h"
#import "BITHockeyManagerDelegate.h"
#import "NSApplicationDelegate.h"
#import "NSMenuDelegate.h"
#import "NSWindowDelegate.h"

@class MSIOSConnectionController, MSReleaseNotesWindowController, NSMenu, NSMenuItem, NSMutableArray, NSObject<OS_dispatch_semaphore>, NSString, NSTimer, NSURL;

@interface AppController : NSObject <NSApplicationDelegate, BITHockeyManagerDelegate, BITCrashManagerDelegate, NSWindowDelegate, NSMenuDelegate>
{
    id shapesMenu;
    NSMenuItem *pluginsMenuItem;
    NSMenu *templatesMenu;
    NSMenu *printMenu;
    NSMenuItem *debugMenuItem;
    MSIOSConnectionController *_connectionController;
    NSTimer *_updateTimer;
    MSReleaseNotesWindowController *_releaseNotesWindowController;
    NSString *_scriptPath;
    NSURL *_crashLogURL;
    NSMutableArray *_crashLog;
    id _lastRunPlugin;
    NSObject<OS_dispatch_semaphore> *_migrationSemaphore;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *migrationSemaphore; // @synthesize migrationSemaphore=_migrationSemaphore;
@property(retain, nonatomic) id lastRunPlugin; // @synthesize lastRunPlugin=_lastRunPlugin;
@property(retain, nonatomic) NSMutableArray *crashLog; // @synthesize crashLog=_crashLog;
@property(retain, nonatomic) NSURL *crashLogURL; // @synthesize crashLogURL=_crashLogURL;
@property(nonatomic) NSString *scriptPath; // @synthesize scriptPath=_scriptPath;
@property(retain, nonatomic) MSReleaseNotesWindowController *releaseNotesWindowController; // @synthesize releaseNotesWindowController=_releaseNotesWindowController;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) MSIOSConnectionController *connectionController; // @synthesize connectionController=_connectionController;
- (void).cxx_destruct;
- (id)crashLogText;
- (void)addToCrashLog:(id)arg1;
- (void)waitForResourceMigrationToFinish;
- (void)migrateResources:(id)arg1;
- (id)resourcesNeedingMigrationFromResources:(id)arg1;
- (void)refreshCurrentDocument;
- (void)visitDocumentation:(id)arg1;
- (void)openPluginsFolder:(id)arg1;
- (void)runLastScriptAction:(id)arg1;
- (void)runCustomScriptAction:(id)arg1;
- (void)revealPlugin:(id)arg1;
- (void)editPlugin:(id)arg1;
- (void)runPlugin:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)buyInAppStore:(id)arg1;
- (id)majorVersion;
- (id)subTextForRegistration;
- (void)showSupportPage:(id)arg1;
- (void)showOnlineHelp:(id)arg1;
- (void)feedback:(id)arg1;
- (void)openPreferencesWindow:(id)arg1;
- (void)documentWillClose:(id)arg1;
- (void)revealPluginsFolderInFinder:(id)arg1;
- (void)addTemplatesAtPath:(id)arg1 toMenu:(id)arg2;
- (id)templateLibraryPath;
- (void)updateTemplateMenu:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)openTemplateAtPath:(id)arg1;
- (void)openTemplateFile:(id)arg1;
- (void)checkImageTemplates;
- (void)checkDefaults;
- (BOOL)applicationShouldOpenUntitledFile:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)showReleaseNotesWindow:(id)arg1;
- (void)setupMetrics;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)awakeFromNib;
- (void)welcomeToSketch:(id)arg1;
- (void)showMainApplicationWindow;
- (id)licensePlaceholderString;
- (BOOL)isAppStoreVersion;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (id)runPluginScript:(id)arg1;
- (id)runPluginAtURL:(id)arg1;
- (id)evaluateScript:(id)arg1;
- (BOOL)isSparkleUsed;
- (void)checkForUpdates:(id)arg1;
- (void)startHockeyAppTracking;
- (void)stopCheckingForUpdates;
- (void)checkForUpdatesAndCrashes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

