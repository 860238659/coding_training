# Spring Framwork + Spring Boot 部分注解

## 重要概念
1. 核心
- IOC 控制反轉
- DI 依賴注入
  - constructor-based 构造器注入(相关: @ConstructorProperties)
  - setter-based setter注入
  - property declaration 自动注入(相关: @Autowired, @Required)
- 生命周期相关
  - init-method 初始化回调(相关: @PostConstruct)
  - destroy-method 关闭回调(相关: @ProDestroy)
- AOP 切面編程（概念即可
  - Scope Bean创建模式(Singleton, Prototype, Session, ...)对应Bean生存周期
- ApplicationContext 配置类，四种实现(分为xml配置与注解配置)
  - FileSystemXmlApplicationContext
  - ClassPathXmlApplicationContext
  - XmlWebApplicationContext
  - *AnnotationConfigApplicationContext（Springboot 以注释配置）
- SpringMVC业务层级
  - Controller 控制层
  - Service 服务层
  - Dao 持久层
- Spring Boot简化配置
  - properties 配置方法
  - yml/yaml 配置方法

## 重要注釋
### Classify
```java
// 1. Configuration
@SpringBootApplication
@Configuration
@EnableAutoConfiguration
@ComponentScan(basePackage="[path]")
@MapperScan("[mapper-path]")

// 2. Bean definition
@Bean([name="[name]"|name={"name1", "name2", ...}], [initMethod="func"], [destroyMethod="func"])
@Component("[id]")
@RestController
@Controller
@Service
@Repository

// 2.1 Bean decoration
@Scope("[type]", [proxyMode="ScopedProxyMode.[mode]"])  // type = [singleton, prototype, request, session, global session], mode = [NO, INTERFACES, TARGET_CLASS]

  // Specific Scope
  @RequestScope
  @SessionScope
  @ApplicationScope
@Description("[content]")
@PostConstruct  // on the specific function
@PreDestroy

// 3. Dependency Injection
@Resource
@Autowired

// 4. SpringMVC: Decoration for Controller
@RequestMapping(value="/path/{param}", method=RequestMethod.[type]) // type = [GET, POST, DELETE, PUT, ...]
  // Specific RequestMapping
  @GetMapping
  @PostMapping
  @DeleteMapping
  @PutMapping
@PathVariable(value="param")  // router path
@RequestParam(value="param", defaultValue=[value], required=[boolean])  // parameters in url