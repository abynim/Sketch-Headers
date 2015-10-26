#import "NSObject.h"

#import "BITCrashManagerDelegate.h"
#import "BITHockeyManagerDelegate.h"
#import "NSApplicationDelegate.h"
#import "NSMenuDelegate.h"
#import "NSWindowDelegate.h"

@class BCLicenseManager, ECLogManagerMacUISupport, MSIOSConnectionController, MSLocalWebServer, MSPasteboardManager, MSPersistentAssetCollection, MSPluginCommand, MSPluginCommandSpecifier, MSPluginManager, MSReleaseNotesWindowController, NSMenu, NSMenuItem, NSMutableArray, NSObject<OS_dispatch_semaphore>, NSString, NSTimer, NSURL;

@interface AppController : NSObject <NSApplicationDelegate, BITHockeyManagerDelegate, BITCrashManagerDelegate, NSWindowDelegate, NSMenuDelegate>
{
    id shapesMenu;
    NSMenuItem *pluginsMenuItem;
    NSMenu *templatesMenu;
    NSMenu *printMenu;
    NSMenuItem *debugMenuItem;
    MSIOSConnectionController *_connectionController;
    NSMenuItem *_insertSymbolMenuItem;
    NSMenuItem *_insertSharedTextStyleMenuItem;
    NSTimer *_updateTimer;
    MSPasteboardManager *_pasteboardManager;
    MSLocalWebServer *_localServer;
    MSReleaseNotesWindowController *_releaseNotesWindowController;
    NSString *_scriptPath;
    NSURL *_crashLogURL;
    NSMutableArray *_crashLog;
    MSPluginCommandSpecifier *_lastRunPluginSpecifier;
    MSPluginCommand *_lastRunPluginScriptCommand;
    NSObject<OS_dispatch_semaphore> *_migrationSemaphore;
    BCLicenseManager *_licenseManager;
    MSPersistentAssetCollection *_globalAssets;
    MSPluginManager *_pluginManager;
    ECLogManagerMacUISupport *_logSupport;
}

+ (id)licenseManager;
@property(retain, nonatomic) ECLogManagerMacUISupport *logSupport; // @synthesize logSupport=_logSupport;
@property(retain, nonatomic) MSPluginManager *pluginManager; // @synthesize pluginManager=_pluginManager;
@property(retain, nonatomic) MSPersistentAssetCollection *globalAssets; // @synthesize globalAssets=_globalAssets;
@property(retain, nonatomic) BCLicenseManager *licenseManager; // @synthesize licenseManager=_licenseManager;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *migrationSemaphore; // @synthesize migrationSemaphore=_migrationSemaphore;
@property(retain, nonatomic) MSPluginCommand *lastRunPluginScriptCommand; // @synthesize lastRunPluginScriptCommand=_lastRunPluginScriptCommand;
@property(retain, nonatomic) MSPluginCommandSpecifier *lastRunPluginSpecifier; // @synthesize lastRunPluginSpecifier=_lastRunPluginSpecifier;
@property(retain, nonatomic) NSMutableArray *crashLog; // @synthesize crashLog=_crashLog;
@property(retain, nonatomic) NSURL *crashLogURL; // @synthesize crashLogURL=_crashLogURL;
@property(nonatomic) NSString *scriptPath; // @synthesize scriptPath=_scriptPath;
@property(retain, nonatomic) MSReleaseNotesWindowController *releaseNotesWindowController; // @synthesize releaseNotesWindowController=_releaseNotesWindowController;
@property(retain, nonatomic) MSLocalWebServer *localServer; // @synthesize localServer=_localServer;
@property(retain, nonatomic) MSPasteboardManager *pasteboardManager; // @synthesize pasteboardManager=_pasteboardManager;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) NSMenuItem *insertSharedTextStyleMenuItem; // @synthesize insertSharedTextStyleMenuItem=_insertSharedTextStyleMenuItem;
@property(retain, nonatomic) NSMenuItem *insertSymbolMenuItem; // @synthesize insertSymbolMenuItem=_insertSymbolMenuItem;
@property(retain, nonatomic) MSIOSConnectionController *connectionController; // @synthesize connectionController=_connectionController;
- (void).cxx_destruct;
- (id)crashLogText;
- (void)addToCrashLog:(id)arg1;
- (void)waitForResourceMigrationToFinish;
- (void)migrateResources:(id)arg1;
- (id)resourcesNeedingMigrationFromResources:(id)arg1;
- (void)refreshCurrentDocument;
- (void)visitDocumentation:(id)arg1;
- (void)openPluginPreferences:(id)arg1;
- (void)runLastScriptAction:(id)arg1;
- (void)runCustomScriptAction:(id)arg1;
- (void)revealPlugin:(id)arg1;
- (void)editPlugin:(id)arg1;
- (void)runPlugin:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)lastRunScript;
- (void)setupLicenseManager;
- (void)buy:(id)arg1;
- (id)majorVersion;
- (void)showSupportPage:(id)arg1;
- (void)showOnlineHelp:(id)arg1;
- (void)feedback:(id)arg1;
- (void)openPreferencesWindowWithPreferencePaneIdentifier:(id)arg1;
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
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)licenseStateChanged;
- (void)awakeFromNib;
- (void)welcomeToSketch:(id)arg1;
- (void)showMainApplicationWindow;
- (id)licensePlaceholderString;
- (BOOL)isAppStoreVersion;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (id)runPluginScript:(id)arg1 name:(id)arg2;
- (id)runPluginScript:(id)arg1;
- (id)runPluginAtURL:(id)arg1;
- (id)runPluginCommandWithIdentifier:(id)arg1 fromBundleAtURL:(id)arg2;
- (id)runPluginCommand:(id)arg1 fromMenu:(BOOL)arg2;
- (id)runPluginCommand:(id)arg1;
- (id)pluginContext;
- (id)evaluateScript:(id)arg1;
- (void)buildPluginsMenu:(id)arg1;
- (BOOL)isSparkleUsed;
- (void)checkForUpdates:(id)arg1;
- (void)stopCheckingForUpdates;
- (void)checkForUpdatesAndCrashes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

