/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSXMLParser, WPXMLRPCDecoderDelegate, NSData, NSMutableString, NSString;

@interface WPXMLRPCDecoder : NSObject <NSXMLParserDelegate> {

	NSXMLParser* _parser;
	WPXMLRPCDecoderDelegate* _delegate;
	BOOL _isFault;
	NSData* _body;
	NSData* _originalData;
	id _object;
	NSMutableString* _methodName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parse;
-(void)abortParsing;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(id)error;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(BOOL)isFault;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(id)initWithData:(id)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(id)object;
-(long long)faultCode;
-(id)faultString;
@end
