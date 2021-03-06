/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPDecoder.h>

@protocol OS_dispatch_data;
@class NSObject, NSMutableDictionary, NSString;

@interface TSPObjectSerializationDecoder : NSObject <TSPDecoder> {

	NSObject*<OS_dispatch_data> _encodedData;
	unsigned long long _encodedDataLength;
	NSMutableDictionary* _directory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEncodedData:(id)arg1 ;
-(id)init;
-(id)newReadChannelForLocator:(id)arg1 ;
-(id)newReadChannelForMetadata;
-(id)newReadChannelForRootObjectComponent;
-(id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2 ;
@end

