//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC8Chocolat21MSEmbeddedFontManager : NSObject
{
    // Error parsing type: , name: serialQueue
    // Error parsing type: , name: sessionIdentifier
    // Error parsing type: , name: documentIDsByFamilyName
    // Error parsing type: , name: extractedFontURLsByFamilyName
}

+ (id)shared;
- (void).cxx_destruct;
- (id)init;
- (id)managedFontFamilyNamesForDocumentID:(id)arg1;
- (id)allManagedFontFamilyNames;
- (void)hardReset;
- (void)updateEmbeddedFontReferences:(id)arg1 forDocumentID:(id)arg2;
- (void)unregisterDocumentID:(id)arg1;
- (void)registerEmbeddedFontsWithReferences:(id)arg1 forDocumentID:(id)arg2;

@end

