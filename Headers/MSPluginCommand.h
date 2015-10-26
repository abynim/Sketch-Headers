#import "NSObject.h"

@class COScript, ECASLClient, MSPluginBundle, MSPluginCommandSpecifier, MSPluginScript, NSMutableString, NSString, NSTimer;

@interface MSPluginCommand : NSObject
{
    MSPluginCommandSpecifier *_commandSpecifier;
    BOOL _skipNextLog;
    NSString *_identifier;
    MSPluginScript *_script;
    NSString *_name;
    NSString *_handler;
    NSString *_shortcut;
    MSPluginBundle *_pluginBundle;
    ECASLClient *_logger;
    NSMutableString *_log;
    COScript *_session;
    NSTimer *_sessionTimer;
    double _lastTimerInterval;
}

+ (id)rawShortcutStringForPluginAtURL:(id)arg1;
+ (id)legacyCommandFromScriptAtURL:(id)arg1;
+ (id)commandWithJSON:(id)arg1 scripts:(id)arg2 scriptsURL:(id)arg3;
@property(nonatomic) BOOL skipNextLog; // @synthesize skipNextLog=_skipNextLog;
@property(nonatomic) double lastTimerInterval; // @synthesize lastTimerInterval=_lastTimerInterval;
@property(retain, nonatomic) NSTimer *sessionTimer; // @synthesize sessionTimer=_sessionTimer;
@property(retain, nonatomic) COScript *session; // @synthesize session=_session;
@property(retain, nonatomic) NSMutableString *log; // @synthesize log=_log;
@property(retain, nonatomic) ECASLClient *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak MSPluginBundle *pluginBundle; // @synthesize pluginBundle=_pluginBundle;
@property(readonly, nonatomic) NSString *shortcut; // @synthesize shortcut=_shortcut;
@property(readonly, copy, nonatomic) NSString *handler; // @synthesize handler=_handler;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) MSPluginScript *script; // @synthesize script=_script;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forKey:(id)arg2 onLayer:(id)arg3;
- (id)valueForKey:(id)arg1 onLayer:(id)arg2;
- (id)pluginBundleIdentifierForMetadta;
- (void)setValue:(id)arg1 forKey:(id)arg2 onLayer:(id)arg3 forPluginIdentifier:(id)arg4;
- (id)valueForKey:(id)arg1 onLayer:(id)arg2 forPluginIdentifier:(id)arg3;
- (id)metadata;
- (id)menuItemWithAction:(SEL)arg1;
- (unsigned long long)shortcutModifiers;
- (id)shortcutKey;
@property(readonly, nonatomic) MSPluginCommandSpecifier *commandSpecifier;
- (void)error:(id)arg1;
- (void)print:(id)arg1;
- (void)coscript:(id)arg1 hadError:(id)arg2 onLineNumber:(long long)arg3 atSourceURL:(id)arg4;
- (void)purgeCompletedSession;
- (id)run:(id)arg1;
- (id)initWithScript:(id)arg1 identifier:(id)arg2 name:(id)arg3 handler:(id)arg4 shortcut:(id)arg5;

@end

