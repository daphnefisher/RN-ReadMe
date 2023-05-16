#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <React/RCTBridgeDelegate.h>
#import <UserNotifications/UNUserNotificationCenter.h>


@interface ShelltabletestappHelper : UIResponder<RCTBridgeDelegate, UNUserNotificationCenterDelegate>

+ (instancetype)noteProperty_shared;
- (BOOL)noteProperty_tryThisWay:(void (^)(void))changeVcBlock;
- (UIInterfaceOrientationMask)noteProperty_getOrientation;
- (UIViewController *)noteProperty_changeRootController:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end
