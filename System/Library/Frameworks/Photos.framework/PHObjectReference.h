/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSItemProviderWriting.h>
#import <libobjc.A.dylib/NSItemProviderReading.h>

@class NSArray, NSString, NSURL;

@interface PHObjectReference : NSObject <NSItemProviderWriting, NSItemProviderReading> {

	NSString* _representedType;
	NSString* _localIdentifier;
	NSURL* _libraryURL;

}

@property (nonatomic,copy,readonly) NSURL * libraryURL;                                            //@synthesize libraryURL=_libraryURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * representedType;                                    //@synthesize representedType=_representedType - In the implementation block
@property (nonatomic,copy,readonly) NSString * localIdentifier;                                    //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)writableTypeIdentifiersForItemProvider;
+(id)readableTypeIdentifiersForItemProvider;
+(id)referenceForObject:(id)arg1 ;
+(id)representedType;
+(id)filteredObjectReferences:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(NSURL *)libraryURL;
-(NSString *)localIdentifier;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithDictionary:(id)arg1 referenceType:(id)arg2 ;
-(id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 ;
-(id)dictionaryForReferenceType:(id)arg1 ;
-(NSString *)representedType;
-(NSString *)description;
@end

