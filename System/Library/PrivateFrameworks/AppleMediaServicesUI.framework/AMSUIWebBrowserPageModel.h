/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSUIWebPageProvider.h>

@class AMSUIWebNavigationBarModel, NSString, AMSUIWebClientContext;

@interface AMSUIWebBrowserPageModel : NSObject <AMSUIWebPageProvider> {

	AMSUIWebNavigationBarModel* _navigationBar;
	NSString* _backgroundColor;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * backgroundColor;                                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) AMSUIWebNavigationBarModel * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,readonly) BOOL disableReappearPlaceholder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebNavigationBarModel *)navigationBar;
-(NSString *)backgroundColor;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(id)createViewController;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(BOOL)disableReappearPlaceholder;
@end
