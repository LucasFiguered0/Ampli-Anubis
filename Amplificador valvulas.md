# Amplificador de valvulas de vacio de 15 Watts

## Idea
Nuestra idea era montar un amplificador de guitarra el cual funcionaba mediante valvulas de vacio, aparte tambien le quisimos añadir iluminacion rgb mediante arduino. El chasis y el cajon tambien decidimos hacerlo desde cero. Y con esa idea nacio nuestro proyecto.

![Idea original](https://user-images.githubusercontent.com/97515204/154220001-f0a007a7-6bc7-454e-b5c5-48c0bd0ecfeb.png)

Con esa idea en mente decidimos documentarnos sobre proyectos parecidos y entonces dimos con una pagina web (enlace pagina), la cual nos suministro unos planos para el montaje de este. Abajo en el Anexo podreis encontrar el esquema electrico detallado.

![ESQUEMA](https://robrobinette.com/images/Guitar/AA1164/AA1164_Princeton_Reverb_Layout_Reverb_and_Tremolo_Deleted_Plus_Mid.png)

Posterior a ver los planos decidimos informarnos un poco de como funcionan las valvulas, las cuales funcionan de la siguiente manera:
Válvulas de vacío: Es un componente electrónico utilizado para amplificar, conmutar, o modificar una señal eléctrica mediante el control del movimiento de los electrones (Tensión (V)) en un espacio vacío a muy baja presión, o en presencia de gases.

Todos los triodos tienen un electrodo (cátodo) calentado por un filamento, que libera electrones, y un electrodo de placa de metal plana (ánodo) que los atrae, con una rejilla que consta de una pantalla de hilos que controlan la corriente.

![valvulas](https://user-images.githubusercontent.com/97515204/154220217-7ac01440-8a7f-4314-9ebd-af12b6674e71.png)

Una vez tuvimos todo claro procedimos a realizar un modelo 3D de la idea (https://www.tinkercad.com/things/5hVMJ6lUgMq-amplificador).

![https://user-images.githubusercontent.com/97515204/152945049-f07eacdb-eddd-419d-befb-653076bde2b1.png](https://user-images.githubusercontent.com/97515204/152945049-f07eacdb-eddd-419d-befb-653076bde2b1.png) ![https://user-images.githubusercontent.com/97515204/152945135-faadd51f-24a0-4e16-9ea6-62c3194975a2.png](https://user-images.githubusercontent.com/97515204/152945135-faadd51f-24a0-4e16-9ea6-62c3194975a2.png) ![https://user-images.githubusercontent.com/97515204/152945222-6698de1c-33ca-4107-b39d-c9af0cdb462f.png](https://user-images.githubusercontent.com/97515204/152945222-6698de1c-33ca-4107-b39d-c9af0cdb462f.png)


## Organización

![organigrama](https://user-images.githubusercontent.com/97515204/154220577-76e3d652-d051-464b-873a-2d6b709376a7.png)


## Historia del amplificador

Lee De Forest inventó el triodo a principios del siglo XX, que estaba compuesto por una rejilla de platino, ánodo y cátodo. Todo esto estaba encerrado en una especie de bombilla parcialmente vacía.Gracias a este invento, Lee De Forest es considerado el padre de la electrónica. A partir de entonces nacieron las válvulas al vacío de triodo, que eran lo mismo básicamente, pero dentro de la bombilla no había nada de aire, ni mucho menos algún tipo de gas. Esto hacía que el filamento o cátodo no se quemara rápidamente.
Esta creación permitía que con una tensión débil se creará mayor fuerza de corriente para los equipos de audio. Es así como los triodos al vacío comenzaron a usarse en amplificadores de alta calidad, gramófonos, televisores, etc.
El triodo fue patentado por el mismo Lee en 1906

![Lee_de_Forest_american_inventor](https://user-images.githubusercontent.com/97515204/154220919-46042945-1d1a-451e-8b89-5765f7220bad.png)

En caso de mayor documentacion sobre la historia visitar: https://unaguitarrafeliz.es/la-evolucion-del-amplificador-del-triodo-a-los-transistores/

## Chasis y cajon de madera

EN cuanto al chasis y el cajon buscamos unas medidas estandar entre distintos amplificadores y decidimos que seria un amplificador de 45cm x 20cm.

![medias](https://user-images.githubusercontent.com/97515204/154221080-c41a681f-d9d2-4fc6-9ee0-54a1211ad0cb.png)

Una vez decididas las medias nos dispusimos a hacer el chasis que seria donde se amarrara toda la electronica del proyecto, decidimos hacerlo de aluminio ya que es un metal muy facil de moldear. Le asignamos las posiciones a los diferentes elementos que componenen al amplificador y hicimos los corte y agujeros necesarios.Cuando ya teniamos todos los agujeros doblamos los frontales y en colaboracion con el departamento de chapa y pintura de don bosco pudimos pintar el chasis de un color negro con acabado mate dandole asi personalidad al chasis y resaltando los componentes visibles.

![chasis](https://user-images.githubusercontent.com/97515204/154221529-5521f71d-9ec0-42b1-9f73-b532b6f39e1f.png)

En cuanto al cajon cojimos dos planchas de madera y teniendo en cuanta las medidas se cortaron, posterior a ello se emsablaron los distintos lados del cajon mediante cola y tornillos los cuales al secarse la cola serian sustituidos por listones de madera.Ademas posterior al secado de la cola, con los listones ya puestos pasamos una fresa para quitar los cantos de la madera y que quedara con las esquinas redondeadas. Tambien hicimos un surco por la parte frontal del ampli de manera que pudieramos meter la tira de leds que deseabamos.

![madera+](https://user-images.githubusercontent.com/97515204/154222121-05cf345b-469a-4e87-860d-b7d0e8461117.png)

Le pusimos Tolex blanco por encima mediante cola para darle un acabado mas profesional y unas cartolas para las esquinas negras que dieran contraste. Para ponerlo nos basamos en este video: (enlace)

![tolex](https://user-images.githubusercontent.com/97515204/154222444-9b7ac750-d7c3-4be3-b6e9-212463b5c8cf.png)

## Iluminacion y arduino

Para la iluminacion usamos un arduino nano y una tira de leds WS2812D. Para llevar a cabo el programa se uso la libreria  "FastLed" y lo que queriamos era programarlo con tres modos de iluminacion, los cuales serian escogibles mediante un selector, a modo de potenciometro para que no desntonara con lo demas del frontal. Los tres modos que queriamos eran el recorrido de la tira de led cambiando de color, amarillo estatico pare que tambien fuera encencdiendo progresivamente la tira y por ultimo mediante una entrada analogica la cual sale del voltimetro y mediante la cual la tira de leds iluminaria segun la señal que produzca la musica. Esta tira de leds era de 5V pero mandaba la informacion de como debia ilumirase mediante la modulacion de pulsos, por lo cual hay que tener en cuenta el sentido en el que se conecta la entrada de esos pulsos pulsos, esta es indicada por una felchita y tiene que ir al pin DI (_entrada del pulso) en caso contrario se conectaria a DO (_salida del pulso) y no funcionaria Aqui dejaremos el programa (Programa).

![leds caution](https://user-images.githubusercontent.com/97515204/154223725-a5ea14a9-2d71-419f-89d5-72f077e46b51.png)

Otra cosa que hay que tener en cuenta es el consumo dependiendo del numero de leds que quieras iluminar en nuestro caso eran 86 y necesitaban una intensidad de 1,50 A y el arduino no es capaz de suministrarnos esa cantidad de amperios por lo que la alimentacion de estos salia del transformador, lo cual nos hizo tener que fabricar una PCB para ello. Dado que el transformador daba corriente alterna tuvimos que hacer un rectificador para que la corriente fuera continua y solucionar el problema de la alimentacion.

PCB por si quereis descargarla: [ARDUINO NANO ANUBIS pcb.zip](https://github.com/LucasFiguered0/Ampli-Anubis/files/8078435/ARDUINO.NANO.ANUBIS.pcb.zip)
 
 ![pcb arduino](https://user-images.githubusercontent.com/97515204/154232420-ee92e69a-35bb-42e4-97c5-e3be0fbe3e01.png)

La libreria "FastLed" es algo compleja cabe destacar ya que hace falta conocer muy bien los comandos de esta y entender como funcionaba nuestra tira de leds ya que no era una tira normal de rgb si no que esta funcionaba mediante la modulación de pulsos, lo cual fue una ventaja a la hora de hacer los efectos de iluminacion ya que pudimos coneguir efectos que con una tira normal seria imposible. 

https://user-images.githubusercontent.com/97515204/154230511-33191aa3-4ab9-4255-a005-fa93bacf2575.mp4

El enlace de la libreria por si alguien desea usarla: https://www.arduino.cc/reference/en/libraries/fastled/
Información sobre sus comandos basicos: https://blog.claytonk.com/2019/10/16/working-with-fastled-library/

## Electronica
Para llevar acabo este proyecto en vez de una PCB tradicional, la cual cual genera ruidos, decidimos unas una eyelet board de fibra de vidrio. A la cual le hicimos los agujeros a disposicion de donde iban los componentes y les pusimos unos hojales los cuales con una punta y un martillo amarramos bien a esta. 

(FOTO)

En cuanto a conexiones nos basamos en estos esquemas de aqui abajo y solo le añadimos unos elemntos de protección para que no se dañara nada en caso de que llegara a haber un problema.Tambien se incluyo un pequeño circuito bias y tambien un voltimetro, el cual iria en el frontal y le daria un toque mas personalizado al amplificador.

(Foto)

El esquema se divide en tres partes que serian preamplificador, driver (phase inverter), y estapa de potencia.

(FOTO), (FOTO), (FOTO)

Para tomar valores y hacer pruebas hay que hacerlo con mucho cuidado y descargar la bateria de condensaores, ya que este amplificador trabaja con 420 V de tensión lo cual puede producir un gran problema,  en nuestro caso disponiamos de una herramienta artesanal creada por nuestro tutor del proyecto.

(FOTO)

# Anexos

(FOTOS ESQUEMAS)
