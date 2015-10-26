#import "NSObject.h"

@class MSDocumentData, NSHashTable, NSString, NSURL;

@interface MSWebExporter : NSObject
{
    MSDocumentData *_documentData;
    NSURL *_destinationURL;
    unsigned long long _exportMode;
    NSString *_name;
    NSHashTable *_previouslyExported;
}

+ (void)exportDocument:(id)arg1 withName:(id)arg2 toLocalURL:(id)arg3 exportMode:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
@property(retain, nonatomic) NSHashTable *previouslyExported; // @synthesize previouslyExported=_previouslyExported;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long exportMode; // @synthesize exportMode=_exportMode;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(retain, nonatomic) MSDocumentData *documentData; // @synthesize documentData=_documentData;
- (void).cxx_destruct;
- (BOOL)saveManifestFile:(id)arg1 withError:(id *)arg2;
- (id)imageRepresentationFromRootLayer:(id)arg1 onPage:(id)arg2;
- (id)metadataAndExportForRootLayer:(id)arg1 onPage:(id)arg2;
- (id)metadataAndExportForArtboardsOnPage:(id)arg1;
- (id)metadataAndExportForPage:(id)arg1;
- (id)metadataAndExportForPages:(id)arg1;
- (id)documentFilename;
- (id)metadataForDocument:(id)arg1;
- (void)callCompletionBlock:(CDUnknownBlockType)arg1 withDidExport:(BOOL)arg2 error:(id)arg3;
- (void)exportWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithDocument:(id)arg1 name:(id)arg2 localURL:(id)arg3 exportMode:(unsigned long long)arg4;

@end

