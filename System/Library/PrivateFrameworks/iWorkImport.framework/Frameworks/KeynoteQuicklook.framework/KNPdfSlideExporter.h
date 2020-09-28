/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:08 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KNSlideExporter.h>
#import <libobjc.A.dylib/TSKEncryptedDocumentExporter.h>

@class TSUProgress, NSString;

@interface KNPdfSlideExporter : KNSlideExporter <TSKEncryptedDocumentExporter>

@property (nonatomic,readonly) BOOL isCancelled; 
@property (nonatomic,readonly) TSUProgress * progress; 
@property (nonatomic,readonly) BOOL needsSupplementalFiles; 
@property (nonatomic,copy) NSString * typeUTI; 
@property (nonatomic,readonly) NSString * savePanelMessage; 
@property (nonatomic,readonly) NSString * documentSpecificTypeUTI; 
@property (nonatomic,readonly) BOOL isExportSupported; 
@property (nonatomic,readonly) BOOL canExportInBackground; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPassphrase:(id)arg1 hint:(id)arg2 ;
-(void)setPrintPassphrase:(id)arg1 hint:(id)arg2 ;
-(void)setCopyPassphrase:(id)arg1 hint:(id)arg2 ;
-(BOOL)validatePassphrases:(id*)arg1 ;
-(id)p_renderingExporterDelegate;
@end
