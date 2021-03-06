/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/SSLoggable.h>

@class NSString, SSHarvestedApplicationMetadata, SSHarvestedApplicationDocument;

@interface SSEnvironmentElement : NSObject <NSCopying, BSXPCCoding, SSLoggable> {

	CGRect _rect;
	NSString* _bundleIdentifier;
	NSString* _elementIdentifier;
	NSString* _identifier;
	BOOL _hasKeyboardFocus;
	SSHarvestedApplicationMetadata* _metadata;
	SSHarvestedApplicationDocument* _document;

}

@property (nonatomic,readonly) CGRect rect; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * elementIdentifier; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL hasKeyboardFocus; 
@property (nonatomic,readonly) BOOL supportsMetadataCapture; 
@property (nonatomic,retain) SSHarvestedApplicationMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) SSHarvestedApplicationDocument * document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) BOOL isAppLibrary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * loggableDescription; 
+(id)_metadataIdentifierBlacklist;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMetadata:(SSHarvestedApplicationMetadata *)arg1 ;
-(NSString *)bundleIdentifier;
-(SSHarvestedApplicationMetadata *)metadata;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)elementIdentifier;
-(CGRect)rect;
-(id)init;
-(SSHarvestedApplicationDocument *)document;
-(BOOL)hasKeyboardFocus;
-(void)setDocument:(SSHarvestedApplicationDocument *)arg1 ;
-(NSString *)loggableDescription;
-(BOOL)supportsMetadataCapture;
-(id)initWithDisplayLayoutElement:(id)arg1 ;
-(BOOL)isAppLibrary;
@end

