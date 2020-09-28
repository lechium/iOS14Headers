/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString, WKFrameInfo, NSURLRequest, NSURLResponse;

@interface WKNavigationResponse : NSObject <WKObject> {

	ObjectStorage<API::NavigationResponse> _navigationResponse;

}

@property (nonatomic,readonly) NSString * _sf_suggestedFilename; 
@property (nonatomic,readonly) NSString * _sf_explicitSuggestedFilename; 
@property (nonatomic,readonly) WKFrameInfo * _frame; 
@property (nonatomic,readonly) NSURLRequest * _request; 
@property (nonatomic,readonly) NSString * _downloadAttribute; 
@property (getter=isForMainFrame,nonatomic,readonly) BOOL forMainFrame; 
@property (nonatomic,copy,readonly) NSURLResponse * response; 
@property (nonatomic,readonly) BOOL canShowMIMEType; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)_sf_explicitSuggestedFilename;
-(BOOL)_sf_allowReloadingInMainFrame;
-(NSString *)_sf_suggestedFilename;
-(long long)_sf_responsePolicy:(long long*)arg1 uti:(id*)arg2 ;
-(WKFrameInfo *)_frame;
-(Object*)_apiObject;
-(void)dealloc;
-(NSURLRequest *)_request;
-(NSURLResponse *)response;
-(BOOL)isForMainFrame;
-(BOOL)canShowMIMEType;
-(NSString *)_downloadAttribute;
-(NSString *)description;
@end
